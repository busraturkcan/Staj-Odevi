from django.contrib import admin
from .models import Phonebook, Group


class GroupAdmin(admin.ModelAdmin):
    list_display = ('name',)


class PhonebookAdmin(admin.ModelAdmin):
    list_display = ('firstname', 'lastname', 'number', 'group')
    list_filter = ('group',)
    list_select_related = ('group',)


admin.site.register(Phonebook, PhonebookAdmin)
admin.site.register(Group, GroupAdmin)
