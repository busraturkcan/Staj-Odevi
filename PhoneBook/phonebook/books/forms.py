from django import forms
from .models import Phonebook, Group
from django.db import models


class PhoneForm(forms.ModelForm):
    class Meta:
        model = Phonebook
        fields = ('firstname', 'lastname', 'number', 'email', 'group')


class GroupForm(forms.ModelForm):
    class Meta:
        model = Group
        fields = ('name',)
