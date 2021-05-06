#! /usr/bin/env python3
import shutil,psutil


def check_disk_usage(disk):
    du =shutil.disk_usage(disk)
    free=du.free/du.total*100
    #print(free)
    return free>20

def check_cpu_usage():
    usage =psutil.cpu_percent(1)
    #print(usage)
    return usage <75

if not check_disk_usage("/") or not check_cpu_usage():
    print("error")
else:
    print("everything is ok")