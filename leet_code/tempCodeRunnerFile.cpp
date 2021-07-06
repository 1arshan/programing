else
            {
                cout<<"j: "<<j<<endl;
                if(j>0)//think
                {
                    intervals[i+1][0]=intervals[i+1+j][0];
                    intervals[i+1][1]=intervals[i+1+j][1];
                }
            }