from django.db import models
from datetime import datetime
from django.contrib.auth.models import User


# Create your models here.
class Room(models.Model):
    name = models.CharField(max_length=1000)


class Message(models.Model):
    value = models.CharField(max_length=1000000)
    date = models.DateTimeField(default=datetime.now, blank=True)
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    # room = models.CharField(max_length=1000000)
    room=models.ForeignKey(Room,on_delete=models.CASCADE)