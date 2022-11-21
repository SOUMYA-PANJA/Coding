from django.db import models

# Create your models here.

class Service(models.Model):
    Email = models.CharField(max_length=122)
    Password = models.CharField(max_length=12)

    def __str__(self):
        return self.Email[0:6] # Shows to data in the table with name as first 6 element of the email.