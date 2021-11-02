from django.shortcuts import render
from django.http import HttpResponse, HttpResponseRedirect
from django.urls import reverse
from django.contrib.auth import authenticate, logout, login
from .forms import LoginForm, UserRegistrationForm
from chat.models import Room


def user_login(request):
    if request.user.is_authenticated:
        return HttpResponseRedirect(reverse('home'))

    if request.method == 'POST':
        form = LoginForm(request.POST)

        if form.is_valid():
            username = request.POST['username']
            password = request.POST['password']
            user = authenticate(username=username, password=password)

            if user:

                if user.is_active:
                    login(request, user)
                    return HttpResponseRedirect(reverse('home'))
                else:
                    return HttpResponse('User is not Active')
            else:
                return HttpResponse('User Not Available')
    else:
        form = LoginForm()

    # product_categories = ProductCategories.objects.all()
    room = Room.objects.all()

    context = {
        'room': room,
        'total_item_cart': 0,
        'form': form
    }

    return render(request, 'accounts/login.html', context)


def register(request):
    if request.user.is_authenticated:
        return HttpResponse('First logout')

    if request.method == 'POST':
        form = UserRegistrationForm(request.POST)

        if form.is_valid():
            user = form.save(commit=False)
            user.set_password(form.cleaned_data['password'])
            user.save()
            # Profile.objects.create(user=user)
            return HttpResponseRedirect(reverse('user_login'))
    else:
        form = UserRegistrationForm()

    room = Room.objects.all()

    context = {
        'room': room,
        'total_item_cart': 0,
        'form': form
    }

    return render(request, 'accounts/register.html', context)
