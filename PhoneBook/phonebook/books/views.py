from django.shortcuts import render
from .models import Phonebook, Group
from django.views import generic
from django.views.generic import UpdateView, DeleteView, CreateView
from django.shortcuts import get_object_or_404
from .forms import PhoneForm, GroupForm


class NumberListView(generic.ListView):
    model = Phonebook
    template_name = 'phone_list.html'

    def get_queryset(self):
        return Phonebook.objects.all()


def number_detail(request, pk):
    numbers = get_object_or_404(Phonebook, pk=pk)
    return render(request, 'phone_detail.html', {'numbers': numbers})


class NumberUpdateView(UpdateView):
    model = Phonebook
    form_class = PhoneForm
    template_name = 'phone_edit.html'
    success_url = '/'

    def get_object(self):
        return Phonebook.objects.get(pk=self.kwargs['pk'])

    def form_valid(self, form):
        self.objects = form.save(commit=False)
        self.objects.user = self.request.user
        self.objects.save()
        return super().form_valid(form)


class NumberDeleteView(DeleteView):
    model = Phonebook
    success_url = '/'

    def get(self, request, *args, **kwargs):
        return self.post(request, *args, **kwargs)


class NumberCreateView(CreateView):
    model = Phonebook
    form_class = PhoneForm
    template_name = 'phone_edit.html'
    success_url = '/'

    def form_valid(self, form):
        self.objects = form.save(commit=False)
        self.objects.user = self.request.user
        self.objects.save()
        return super().form_valid(form)


class GroupListView(generic.ListView):
    model = Group
    template_name = 'group_list.html'

    def get_queryset(self):
        return Group.objects.all()


def group_detail(request, pk):
    groups = get_object_or_404(Group, pk=pk)
    return render(request, 'group_detail.html', {'groups': groups})


class GroupUpdateView(UpdateView):
    model = Group
    form_class = GroupForm
    template_name = 'group_edit.html'
    success_url = '/group'

    def get_object(self):
        return Group.objects.get(pk=self.kwargs['pk'])

    def form_valid(self, form):
        self.objects = form.save(commit=False)
        self.objects.user = self.request.user
        self.objects.save()
        return super().form_valid(form)


class GroupDeleteView(DeleteView):
    model = Group
    success_url = '/group'

    def get(self, request, *args, **kwargs):
        return self.post(request, *args, **kwargs)


class GroupCreateView(CreateView):
    model = Group
    form_class = GroupForm
    template_name = 'group_edit.html'
    success_url = '/group'

    def get_object(self):
        return Group.objects.get(pk=self.kwargs['pk'])

    def form_valid(self, form):
        self.objects = form.save(commit=False)
        self.objects.user = self.request.user
        self.objects.save()
        return super().form_valid(form)
