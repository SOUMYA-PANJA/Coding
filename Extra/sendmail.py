import smtplib, ssl
password = input(":::")
context = ssl.create_default_context()
with smtplib.SMTP_SSL("smtp.gmail.com", 465, context=context) as server:
    server.login("testpanjasoumya22@gmail.com", password)
    server.sendmail("testpanjasoumya22gmail.com", "HELLO@gmail.com", "tHIS IS a python generated mail.")