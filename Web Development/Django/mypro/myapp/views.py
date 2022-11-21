from django.db.models.fields import EmailField
from django.shortcuts import render, HttpResponse # Imported HttpResponse
from myapp.models import Service  # Imported model
from django.contrib import messages  # To show messages

# Create your views here.
def index(request):
    context = {
        "variable":"This is sent"
    }
    messages.success(request, "Hello there....")
    return render(request, "index.htm", context)  # context is sent and replace by {{variable}} in the html page.
    # return HttpResponse("This is a home page...")

def about(request):
    if request.method == "POST":
        em = request.POST.get('email')
        pw =request.POST.get('password')
        ser = Service(Email=em, Password=pw)
        ser.save()
        messages.success(request, 'Your data is saved....')
    return render(request,'about.htm')
    # return HttpResponse("This is a about page...")

def service(request):
    return render(request,'service.htm')
    # return HttpResponse("This is a service page...")