import requests
r = requests.get('http://httpbin.org/status/404')
a = r.status_code

x = requests.get('https://stackoverflow.com/questions/15968031/python-http-status-code?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa')
b = x.status_code

print (a)

print(b)



