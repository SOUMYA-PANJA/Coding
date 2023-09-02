#SOURCE CODE FOR BANK MANAGEMENT

#importing libraries

import tkinter as tk
import mysql.connector as sq
import datetime
from tkinter import messagebox
mycon=sq.connect(host="localhost",user="root",passwd="soumya")
cur=mycon.cursor()

#creating database

cur.execute("create database if not exists bank")
cur.execute("use bank")

#creating required tables

cur.execute("create table if not exists bank_master(acno char(4) primary key,name varchar(30),city char(20),mobileno char(10),balance int(6))")
cur.execute("create table if not exists banktrans(acno char (4),amount int(6),dot date ,ttype char(1),foreign key (acno) references bank_master(acno))")
mycon.commit()

#options

def op():
  global root
  root.destroy()
  root=tk.Tk()
  root.title('BANK')
  root.geometry('690x495+100+100')
  root.resizable(0,0)
  
  b1=tk.Button(root,text='CREATE ACCOUNT',command=createtk,font=('bold',),fg='yellow',bg='blue',height=10,width=20)
  b1.grid(row=0,column=0)
  b2=tk.Button(root,text='DEPOSIT MONEY',command=detk,bg='green',height=10,width=20,font=('bold',),fg='red')
  b2.grid(row=0,column=1)
  b3=tk.Button(root,text='WITHDRAW MONEY',command=witk,height=10,width=20,font=('bold',),fg='black')
  b3.grid(row=0,column=2)
  b4=tk.Button(root,text='DISPLAY ACCOUNT',command=ditk,bg='red',height=10,width=20,font=('bold',),fg='white')
  b4.grid(row=1,column=0)
  b5=tk.Button(root,text='TRANSFER MONEY',command=trtk,bg='yellow',height=10,width=20,font=('bold',),fg='brown')
  b5.grid(row=1,column=1)
  b6=tk.Button(root,text='EXIT',command=etk,bg='grey',height=10,width=20,font=('bold',),fg='blue')
  b6.grid(row=1,column=2)
  
  tk.mainloop()

#creating account

def createtk():
  global root
  
  def create():
    Acno=sacno.get()
    Name=sname.get()
    City=scity.get()
    Mn=smn.get()
        
    balance=0
    s="insert into bank_master values('{}','{}','{}','{}',{})".format(Acno,Name,City,Mn,balance)
    cur.execute(s)
    mycon.commit()
    messagebox.showinfo('INFORMATION','YOUR ACCOUNT IS ACCOUNT CREATED')
    op()
    
  root.destroy()
  root=tk.Tk()
  root.title('CREATE ACCOUNT')
  root.geometry('450x320+100+100')
  root.resizable(0,0)
  
  b1=tk.Button(root,text='BACK',command=op)
  b1.grid(row=4,column=0)

  l1=tk.Label(root,text="ACCOUNT NUMBER")
  l1.grid(row=0,column=0)
  l2=tk.Label(root,text="NAME")
  l2.grid(row=1,column=0)
  l3=tk.Label(root,text="CITY")
  l3.grid(row=2,column=0)
  l4=tk.Label(root,text="MOBILE NUMBER")
  l4.grid(row=3,column=0)
  
  sacno=tk.StringVar()
  sname=tk.StringVar()
  scity=tk.StringVar()
  smn=tk.StringVar()
  acno=tk.Entry(root,textvariable=sacno)
  acno.grid(row=0,column=1)
  name=tk.Entry(root,textvariable=sname)
  name.grid(row=1,column=1)
  city=tk.Entry(root,textvariable=scity)
  city.grid(row=2,column=1)
  mn=tk.Entry(root,textvariable=smn)
  mn.grid(row=3,column=1)
  
  b2=tk.Button(root,text='SUBMIT',command=create)
  b2.grid(row=4,column=1)
  
#deposit money

def detk():
  global root
  
  def de():
    Acno=sacno.get()
    San=san.get()
    Dot=str(datetime.datetime.now())
    ttype="d"
    
    s="insert into banktrans values('{}',{},'{}','{}')".format(Acno,San,Dot,ttype)
    t="update bank_master set balance=balance+{} where acno='{}'".format(San,Acno)
    
    cur.execute(s)
    cur.execute(t)
    mycon.commit()
    messagebox.showinfo('INFORMATION','YOUR ACCOUNT IS UPDATED')
    op()  
 
  root.destroy()
  root=tk.Tk()
  root.title('DEPOSIT MONEY')
  root.geometry('450x320+100+100')
  root.resizable(0,0)
  
  b1=tk.Button(root,text='BACK',command=op)
  b1.grid(row=4,column=0)
  
  l1=tk.Label(root,text="ACCOUNT NUMBER")
  l1.grid(row=0,column=0)
  l2=tk.Label(root,text="AMOUNT")
  l2.grid(row=1,column=0)
  
  sacno=tk.StringVar()
  san=tk.IntVar()
  acno=tk.Entry(root,textvariable=sacno)
  acno.grid(row=0,column=1)
  san=tk.Entry(root,textvariable=san)
  san.grid(row=1,column=1)
  
  b2=tk.Button(root,text='SUBMIT',command=de)
  b2.grid(row=4,column=1)
  
#withdraw money

def witk():
  global root
  
  def wi():
    Acno=sacno.get()
    Wan=wan.get()
    Dot=str(datetime.datetime.now())
    ttype="w"
    
    st="select balance from bank_master where acno ='{}'".format(Acno)
    cur.execute(st)
    balance=cur.fetchone()
    if int(balance[0])<int(Wan):
      
      messagebox.showerror('ERROR','NOT ENOUGH BALANCE IN YOUR ACCOUNT')   
      
    else:
      s="insert into banktrans values('{}',{},'{}','{}')".format(Acno,Wan,Dot,ttype)
      t="update bank_master set balance=balance-{} where acno='{}'".format(Wan,Acno)
      cur.execute(s)
      cur.execute(t)
      mycon.commit()
      messagebox.showinfo('INFORMATION','YOUR ACCOUNT IS UPDATED')
      op()  
  
  root.destroy()
  root=tk.Tk()
  root.title('WITHDRAW MONEY')
  root.geometry('450x320+100+100')
  root.resizable(0,0)
  
  b1=tk.Button(root,text='BACK',command=op)
  b1.grid(row=4,column=0)

  l1=tk.Label(root,text="ACCOUNT NUMBER")
  l1.grid(row=0,column=0)
  l2=tk.Label(root,text="AMOUNT")
  l2.grid(row=1,column=0)
  
  sacno=tk.StringVar()
  wan=tk.IntVar()
  acno=tk.Entry(root,textvariable=sacno)
  acno.grid(row=0,column=1)
  wan=tk.Entry(root,textvariable=wan)
  wan.grid(row=1,column=1)
  
  b2=tk.Button(root,text='SUBMIT',command=wi)
  b2.grid(row=4,column=1)

#display money

def ditk():
  global root
  
  def di():
    Acno=sacno.get()
    s="select * from bank_master where acno={}".format(Acno)
    cur.execute(s)
    for i in cur:
      a="ACCOUNT NUMBER:'{}' \n NAME:'{}' \n CITY:'{}' \n MOBILE NUMBER:'{}' \n BALANCE:'{}".format(i[0],i[1],i[2],i[3],i[4])
      messagebox.showinfo('BANK DETAILS',a)
    op()

  root.destroy()
  root=tk.Tk()
  root.title('DISPLAY ACCOUNT')
  root.geometry('450x320+100+100')
  root.resizable(0,0)
  
  b1=tk.Button(root,text='BACK',command=op)
  b1.grid(row=4,column=0)
  
  l1=tk.Label(root,text="ACCOUNT NUMBER")
  l1.grid(row=0,column=0)

  sacno=tk.StringVar()
  acno=tk.Entry(root,textvariable=sacno)
  acno.grid(row=0,column=1)

  b2=tk.Button(root,text='SUBMIT',command=di)
  b2.grid(row=4,column=1)

#transfer money
  
def trtk():
  global root
  
  def tr():
    Acno=sacno.get()
    San=san.get()
    Dot=str(datetime.datetime.now())
    ttype="tw"
    Rcno=racno.get()
    
    st="select balance from bank_master where acno ='{}'".format(Acno)
    cur.execute(st)
    balance=cur.fetchone()
    if int(balance[0])<int(San):
      
      messagebox.showerror('ERROR','NOT ENOUGH BALANCE IN YOUR ACCOUNT')   
      
    else:
      s="insert into banktrans values('{}',{},'{}','{}')".format(Acno,San,Dot,ttype)
      t="update bank_master set balance=balance-{} where acno='{}'".format(San,Acno)
      w="insert into banktrans values('{}',{},'{}','{}')".format(Rcno,San,Dot,'td')
      z="update bank_master set balance=balance+{} where acno='{}'".format(San,Rcno)
    
      cur.execute(w)
      cur.execute(z)
      cur.execute(s)
      cur.execute(t)
      mycon.commit()
      messagebox.showinfo('INFORMATION','YOUR ACCOUNT IS UPDATED')
      op()
    
  root.destroy()
  root=tk.Tk()
  root.title('TRANSFER MONEY')
  root.geometry('450x320+100+100')
  root.resizable(0,0)
  
  b1=tk.Button(root,text='BACK',command=op)
  b1.grid(row=4,column=0)
  
  l1=tk.Label(root,text="YOUR ACCOUNT NUMBER")
  l1.grid(row=0,column=0)
  l2=tk.Label(root,text="RECIVERS ACCOUNT NUMBER")
  l2.grid(row=1,column=0)
  l3=tk.Label(root,text="AMOUNT TO SEND")
  l3.grid(row=2,column=0)
  
  sacno=tk.StringVar()
  racno=tk.StringVar()
  san=tk.StringVar()
  acno=tk.Entry(root,textvariable=sacno)
  acno.grid(row=0,column=1)
  ac=tk.Entry(root,textvariable=racno)
  ac.grid(row=1,column=1)
  an=tk.Entry(root,textvariable=san)
  an.grid(row=2,column=1)  
  
  b2=tk.Button(root,text='SUBMIT',command=tr)
  b2.grid(row=4,column=1)

#Exit

def etk():
  root.destroy()

#__main__

root=tk.Tk()
op()
