from tkinter import *
import tkinter.font as f
import oracledb
import pyttsx3
import time
from playsound import playsound
engine = pyttsx3.init()
engine.setProperty('rate', 90)

#Connecting to MYSQL database
while 1:
    try:
        oracledb.init_oracle_client()
        conn= oracledb.connect(dsn = 'localhost/xe',user = 'system',password = 'satya')
        cur = conn.cursor()
        cur1 = conn.cursor()
        break
    except:
        print("Wrong password\nTry Again\n")
        continue


#Creating frame window and defining fonts
r =  Tk()
r.title('Student DBMS')
mfont=f.Font(size=20)
tfont=f.Font(size=50)
rfont=f.Font(size=40)

#Defining a Stringvar
Class =  StringVar()
gender = StringVar()
dd = StringVar()
mm = StringVar()
yy = StringVar()
name_select = StringVar()
test_select = StringVar()
opn_1 = StringVar()
opn_2 = StringVar()

#This is the start page
def start_page():
    
    
    f =  Frame(r, height=600, width=900)
    f.pack()
    w =  Label(f, text='Welcome to Student DBMS',font=tfont).place(x=50,y=10) 
    sbmitbtn =  Button(f, text="Add students", activebackground="pink",font=rfont, width=13, bg='violet', activeforeground="blue",
                         command=lambda: [add_std(), f.destroy()]).place(x=30, y=470)
    sbmitbtn =  Button(f, text="View Data", activebackground="pink", activeforeground="blue",font=rfont, width=13, bg='violet',
                         command=lambda: [view(), f.destroy()]).place(x=450, y=470)
    sbmitbtn =  Button(f, text="Add Marks", activebackground="pink", activeforeground="blue",font=rfont, width=13, bg='violet',
                         command=lambda: [add_marks(), f.destroy()]).place(x=450, y=350)
    sbmitbtn =  Button(f, text="Edit students", activebackground="pink", activeforeground="blue",font=rfont, width=13, bg='violet',
                         command=lambda: [edit_student(), f.destroy()]).place(x=30, y=350)
    b =Button(f, text='Quit',font=rfont, width=10, bg='violet', activebackground='pink' ,activeforeground="blue",
                  command=lambda:[f.destroy(),close()]).place(x=270,y=240)
    time.sleep(5)
    
    

def close():
    f=Frame(r,height=600,width=900)
    f.pack()
    w = Label(f, text='Thank You',font=tfont).place(x=300,y=10)
    x = Label(f, text='Prepared by:-',font=rfont, fg='red').place(x=50,y=200)
    y = Label(f, text='Satyajit Satapathy',font=rfont, fg='green').place(x=380,y=200)
    z = Label(f, text='Class:-',font=rfont, fg='red').place(x=205,y=270)
    a = Label(f, text='XI',font=rfont, fg='green').place(x=380,y=270)
    z = Label(f, text='School:-',font=rfont, fg='red').place(x=180,y=340)
    a = Label(f, text='KV Dhenkanal',font=rfont, fg='green').place(x=380,y=340)
    z = Label(f, text='Guided By:-',font=rfont, fg='red').place(x=95,y=420)
    a = Label(f, text='Mr.Gurnishan Singh',font=rfont, fg='green').place(x=380,y=420)

    Back =  Button(f, text='Close',font=mfont, width=10, bg='pink', activebackground='yellow' , command=lambda:[r.destroy()]).place(x=730,y=490)
    


#Adding students
def  add_std():
    f =  Frame(r, height=600, width=900)
    f.pack()

    Label(f, text="Roll No.",font=mfont).place(x=30, y=50)
    Label(f, text="Name",font=mfont).place(x=30, y=90)
    Label(f, text="Gender",font=mfont).place(x=30, y=130)
    Label(f, text="DOB",font=mfont).place(x=30, y=220)
    Label(f, text="Class",font=mfont).place(x=30, y=165)
    Label(f, text="Optional 1",font=mfont).place(x=30, y=250)
    Label(f, text="Optional 2",font=mfont).place(x=30, y=280)
    sbmitbtn =  Button(f, text="Submit", activebackground="pink", activeforeground="blue",font = rfont,bg='violet',
                         command=lambda: [insert(),f.destroy()]).place(x=30, y=400)
    sbmitbtn =  Button(f, text="Home", activebackground="pink", activeforeground="blue",font = rfont,bg='violet',
                         command=lambda: [start_page(), f.destroy()]).place(x=400, y=400)
    Class.set("Select Class")
    gender.set("Select Gender")
    dd.set('Date')
    mm.set('Month')
    yy.set('Year')
    opn_1.set('1st Optional')
    opn_2.set('2nd Optional')
    date_list = list(range(1,32))
    year_list = list(range(1990,2020))



    select_cls = OptionMenu(f, Class, "XI_A", "XI_B" ).place(x=260,y=170)
    sel_gen = OptionMenu(f, gender, "M", "F", "O").place(x=260, y=130)
    sel_dd = OptionMenu(f,dd, *date_list ).place(x=260, y=205)
    sel_mm = OptionMenu(f,mm, '01','02','03','04','05','06','07','08','09','10','11','12' ).place(x=305, y=205)
    sel_yy = OptionMenu(f,yy, *year_list ).place(x=350, y=205)
    opn1 = OptionMenu(f,opn_1,'Comp_Sc','Bio').place(x=260,y=250)
    opn2 = OptionMenu(f,opn_2,'Maths','Hindi').place(x=260,y=280)    


    global e1;e1 =  Entry(f, font=mfont,bg='yellow',width = 2);e1.place(x=260, y=50)
    global e2;e2 =  Entry(f, font=mfont,bg='yellow');e2.place(x=260, y=90)
   


#Inserting data into database
def insert():
   f =  Frame(r, height=600, width=900)
   f.pack()


   global e1;roll_no = e1.get()
   global e2;name = e2.get()
   

   s="Insert into "+ Class.get() +" values("+roll_no+",'"+name+"','"+gender.get()+"','"+yy.get()+"-"+mm.get()+"-"+dd.get()+"','"+opn_1.get()+"','"+opn_2.get()+"')"
   print(s)
   try:
            cur1.execute(s)
            cur1.execute("Insert into "+Class.get()+"_pt_1 (Roll_No) values ("+roll_no+")")
            cur1.execute("Insert into "+Class.get()+"_half_yearly (Roll_No) values ("+roll_no+")")
            cur1.execute("Insert into "+Class.get()+"_pt_2 (Roll_No) values ("+roll_no+")")
            cur1.execute("Insert into "+Class.get()+"_session_ending (Roll_No) values ("+roll_no+")")
            cur1.execute("COMMIT")
            Label(f, text="Data added \nsucessfully",font=tfont).place(x=300, y=250)
            sbmitbtn =  Button(f, text="Home", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [start_page(), f.destroy()]).place(x=100, y=450)
            sbmitbtn =  Button(f, text="Add another student", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [add_std(), f.destroy()]).place(x=350, y=450)
   except:
             cur.execute('rollback')
             Label(f, text="Sorry!!!!\n An error occoured\nPlease recheck the data\nand fill every field",font=tfont).place(x=130, y=90)
        
             sbmitbtn =  Button(f, text="Home", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [start_page(), f.destroy()]).place(x=100, y=450)
             sbmitbtn =  Button(f, text="Try Again", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [add_std(), f.destroy()]).place(x=600, y=450)



#Viewing the data
def view():
    f =  Frame(r, height=600, width=900)
    f.pack()

    Class.set("Select Class")
    Label(f, text="Class",font=rfont).place(x=30, y=100)
    select_cls = OptionMenu(f, Class, "XI_A", "XI_B" ).place(x=260,y=110)

    sbmitbtn =  Button(f, text="Next", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [name_fetch()]).place(x=600, y=450)


    def name_fetch():
        try:
            cur.execute("Select name from "+ Class.get())
            name = cur.fetchall()

            l=[]
            for i in range(len(name)):
                   l.append(name[i][0])
            Label(f, text="Select student",font=rfont).place(x=30, y=220)

            name_select.set('Select Student')
            option = OptionMenu(r,name_select,*l).place(x=450,y=220)

            sbmitbtn =  Button(f, text="Submit", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                             command=lambda: [f.destroy(),show()]).place(x=600, y=450)
        except:
            f.destroy()
            error()


#Displaying Data
def  show():
    try:
         f =  Frame(r, height=600, width=900)
         f.pack()
         cur.execute("Select * from "+Class.get()+" where Name = '"+name_select.get()+"';")
         name = cur.fetchall()
         print(name)
         cur.execute("select * from "+Class.get()+"_pt_1 where Roll_No ="+str(name[0][0]))
         pt1 = cur.fetchall()
         cur.execute("select * from "+Class.get()+"_half_yearly where Roll_No ="+str(name[0][0]))
         hy = cur.fetchall()
         cur.execute("select * from "+Class.get()+"_pt_2 where Roll_No ="+str(name[0][0]))
         pt2 = cur.fetchall()
         cur.execute("select * from "+Class.get()+"_session_ending where Roll_No ="+str(name[0][0]))
         se = cur.fetchall()          

                 
         print(pt1,'\n',hy,'\n',pt2,'\n',se)
         if len(name) == 1:
             if  pt1[0][4] == 0:
                 b_c =5
             else :
                 b_c = 4

             if  pt1[0][6] == 0:
                 m_h = 7
             else:
                  m_h = 6

             #datas of the student
             Label(f, text="DOB",font=mfont).place(x=500, y=90)
             Label(f, text="Roll No.",font=mfont).place(x=30, y=50)
             Label(f, text="Name",font=mfont).place(x=30, y=90)
             Label(f, text="Sex",font=mfont).place(x=500, y=50)

                 
             Label(f, text=name[0][3],font=mfont,fg='blue').place(x=630, y=90)
             Label(f, text=name[0][0],font=mfont,fg='blue').place(x=150, y=50)
             Label(f, text=name[0][1],font=mfont,fg='blue').place(x=150, y=90)
             Label(f, text=name[0][2],font=mfont,fg='blue').place(x=630, y=50)

             #Tests
             Label(f, text='PT 1',font=mfont,fg='purple').place(x=185, y=130)
             Label(f, text='Half Yearly',font=mfont,fg='purple').place(x=310, y=130)
             Label(f, text='PT 2',font=mfont,fg='purple').place(x=540, y=130)
             Label(f, text='Session ending',font=mfont,fg='purple').place(x=690, y=130)

             #Subjects name
             Label(f, text='Physics',font=mfont,fg='green').place(x=20, y=200)
             Label(f, text='Chemistry',font=mfont,fg='green').place(x=20, y=250)
             Label(f, text='Comp. Sc.',font=mfont,fg='green').place(x=20, y=300)
             Label(f, text='Maths',font=mfont,fg='green').place(x=20, y=350)
             Label(f, text='English',font=mfont,fg='green').place(x=20, y=400)

             #phy
             Label(f, text=pt1[0][1],font=mfont,fg='red').place(x=185, y=200)
             Label(f, text=hy[0][1],font=mfont,fg='red').place(x=330, y=200)
             Label(f, text=pt2[0][1],font=mfont,fg='red').place(x=540, y=200)
             Label(f, text=se[0][1],font=mfont,fg='red').place(x=740, y=200)

             #chem
             Label(f, text=pt1[0][2],font=mfont,fg='red').place(x=185, y=250)
             Label(f, text=hy[0][2],font=mfont,fg='red').place(x=330, y=250)
             Label(f, text=pt2[0][2],font=mfont,fg='red').place(x=540, y=250)
             Label(f, text=se[0][2],font=mfont,fg='red').place(x=740, y=250)

             #bio/cs
             Label(f, text=pt1[0][b_c],font=mfont,fg='red').place(x=185, y=300)
             Label(f, text=hy[0][b_c],font=mfont,fg='red').place(x=330, y=300)
             Label(f, text=pt2[0][b_c],font=mfont,fg='red').place(x=540, y=300)
             Label(f, text=se[0][b_c],font=mfont,fg='red').place(x=740, y=300)


             #Maths/hindi
             Label(f, text=pt1[0][m_h],font=mfont,fg='red').place(x=185, y=350)
             Label(f, text=hy[0][m_h],font=mfont,fg='red').place(x=330, y=350)
             Label(f, text=pt2[0][m_h],font=mfont,fg='red').place(x=540, y=350)
             Label(f, text=se[0][m_h],font=mfont,fg='red').place(x=740, y=350)

             #eng
             Label(f, text=pt1[0][3],font=mfont,fg='red').place(x=185, y=400)
             Label(f, text=hy[0][3],font=mfont,fg='red').place(x=330, y=400)
             Label(f, text=pt2[0][3],font=mfont,fg='red').place(x=540, y=400)
             Label(f, text=se[0][3],font=mfont,fg='red').place(x=740, y=400)

             sbmitbtn =  Button(f, text="Home", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [start_page(), f.destroy()]).place(x=100, y=500)
             sbmitbtn =  Button(f, text="View another data", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [view(), f.destroy()]).place(x=400, y=500)
             


             
         else:
            f.destroy()
            error()
    except:
        f.destroy()
        error()




#Definng what will occour in case of error
def error():
    try:
        f.destroy()
    except:
        pass
    f =  Frame(r, height=600, width=900)
    f.pack()
    Label(f, text="Sorry!!!!\n An error occoured\nPlease try again",font=tfont).place(x=130, y=90)
        
    sbmitbtn =  Button(f, text="Home", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [start_page(), f.destroy()]).place(x=100, y=450)


#Adding Marks
def add_marks():
    f =  Frame(r, height=600, width=900)
    f.pack()

    
    Class.set("Select Class")
    Label(f, text="Class",font=rfont).place(x=30, y=100)
    select_cls = OptionMenu(f, Class, "XI_A", "XI_B" ).place(x=260,y=110)

    sbmitbtn =  Button(f, text="Next", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [name_fetch()]).place(x=600, y=450)


    def name_fetch():
        try:
            cur.execute("Select name from "+ Class.get())
            name = cur.fetchall()

            l=[]
            for i in range(len(name)):
                   l.append(name[i][0])
            Label(f, text="Select student",font=rfont).place(x=30, y=320)
            Label(f, text="Select Test",font=rfont).place(x=30, y=220)

            name_select.set('Select Student')
            option = OptionMenu(r,name_select,*l).place(x=450,y=320)

            test_select.set('Select Test')
            option = OptionMenu(r,test_select,'PT_1','Half_Yearly','PT_2','Session_Ending').place(x=450,y=220)
            
            sbmitbtn =  Button(f, text="Submit", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                             command=lambda: [f.destroy(),add_edit_marks()]).place(x=600, y=450)
        except:
            f.destroy()
            error()

            
def  add_edit_marks():
    try:    
             f =  Frame(r, height=600, width=900)
             f.pack()
             cur.execute("Select * from "+Class.get()+" where Name like '%"+name_select.get()+"%';")
             global name; name = cur.fetchall()
             test = "Select * from "+Class.get()+"_"+test_select.get()+" where Roll_No ="+str(name[0][0])+";"
             print(test)
             cur1.execute(test)
             mark = cur1.fetchall()
             print(name)
             print(mark)
             if len(test) != 0:
         
                 Label(f, text="DOB",font=mfont).place(x=500, y=90)
                 Label(f, text="Roll No.",font=mfont).place(x=30, y=50)
                 Label(f, text="Name",font=mfont).place(x=30, y=90)
                 Label(f, text="Sex",font=mfont).place(x=500, y=50)
                 Label(f, text="Test:"+test_select.get(),font=mfont).place(x=500, y=300)
                 
                 


                 Label(f, text="Physics",font=mfont,fg = 'blue').place(x=30, y=150)
                 Label(f, text="Chemistry",font=mfont,fg = 'blue').place(x=30, y=200)
                 Label(f, text=name[0][4],font=mfont,fg = 'blue').place(x=30, y=250)
                 Label(f, text=name[0][5],font=mfont,fg = 'blue').place(x=30, y=300)
                 Label(f, text='English',font=mfont,fg = 'blue').place(x=30, y=350)

                 
                 Label(f, text=name[0][3],font=mfont,fg='red').place(x=630, y=90)
                 Label(f, text=name[0][0],font=mfont,fg='red').place(x=150, y=50)
                 Label(f, text=name[0][1],font=mfont,fg='red').place(x=150, y=90)
                 Label(f, text=name[0][2],font=mfont,fg='red').place(x=630, y=50)

                 global e3;e3 =  Entry(f, font=mfont,bg='violet',width = 4);e3.place(x=200, y=150);     #phy
                 global e4;e4 =  Entry(f, font=mfont,bg='violet',width = 4);e4.place(x=200, y=200);   #chem
                 global e5;e5 =  Entry(f, font=mfont,bg='violet',width = 4);e5.place(x=200, y=350);    #eng
                 global e6;e6 =  Entry(f, font=mfont,bg='violet',width = 4);    #comp
                 global e7;e7 =  Entry(f, font=mfont,bg='violet',width = 4);   #bio
                 global e8;e8 =  Entry(f, font=mfont,bg='violet',width = 4);   #math
                 global e9;e9 =  Entry(f, font=mfont,bg='violet',width = 4);    #hindi


                 if mark[0][1] != None:
                     e3.insert(1,mark[0][1])
                     e4.insert(1,mark[0][2])
                     e5.insert(1,mark[0][3])
                     e6.insert(1,mark[0][5])
                     e7.insert(1,mark[0][4])
                     e8.insert(1,mark[0][6])
                     e9.insert(1,mark[0][7])


                             
                 if  name[0][4] == 'Comp_Sc':
                     e6.place(x=200, y=250)
                     e7.insert(1,0)
                 else:
                     e7.place(x=200, y=250)
                     e6.insert(1,0)
                 if name[0][5]  ==  'Maths':
                     e8.place(x=200, y=300)
                     e9.insert(1,0)
                 else:
                     e9.place(x=200, y=300)
                     e8.insert(1,0)

                 sbmitbtn =  Button(f, text="Save Changes", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                             command=lambda: [save_marks(), f.destroy()]).place(x=100, y=450)
                 sbmitbtn =  Button(f, text="Cancel", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                              command=lambda: [start_page(), f.destroy()]).place(x=600, y=450)
    except:
        f.destroy()
        error()

def save_marks():
    f =  Frame(r, height=600, width=900)
    f.pack()
    global name
    c = "Update "+Class.get()+"_"+test_select.get()+" set phy ="+e3.get()+", chem ="+e4.get()+", eng = "+e5.get()+", comp_sc = "+e6.get()+", bio = "+e7.get()+", maths = "+e8.get()+", hindi = "+e9.get()+" where Roll_no = "+str(name[0][0])
    print(c)

    try:
        cur.execute(c)
        cur.execute('commit')
        Label(f, text="Data added \nsucessfully",font=tfont).place(x=300, y=250)
        sbmitbtn =  Button(f, text="Home", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [start_page(), f.destroy()]).place(x=100, y=400)
        sbmitbtn =  Button(f, text="Add another student", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [add_marks(), f.destroy()]).place(x=400, y=400)
    except:
        f.destroy()
        error()


def edit_student():
    f =  Frame(r, height=600, width=900)
    f.pack()

    Class.set("Select Class")
    Label(f, text="Class",font=rfont).place(x=30, y=100)
    select_cls = OptionMenu(f, Class, "XI_A", "XI_B" ).place(x=260,y=110)

    sbmitbtn =  Button(f, text="Next", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [edit_name_fetch()]).place(x=600, y=450)


    def edit_name_fetch():
        try:
            cur.execute("Select name from "+ Class.get())
            name = cur.fetchall()

            l=[]
            for i in range(len(name)):
                   l.append(name[i][0])
            Label(f, text="Select student",font=rfont).place(x=30, y=220)

            name_select.set('Select Student')
            option = OptionMenu(r,name_select,*l).place(x=450,y=220)

            sbmitbtn =  Button(f, text="Submit", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                             command=lambda: [f.destroy(),edit()]).place(x=600, y=450)
        except:
            f.destroy()
            error()

def edit():
    try:
        f =  Frame(r, height=600, width=900)
        f.pack()

        Label(f, text="Roll No.",font=mfont).place(x=30, y=50)
        Label(f, text="Name",font=mfont).place(x=30, y=90)
        Label(f, text="Gender",font=mfont).place(x=30, y=130)
        Label(f, text="DOB",font=mfont).place(x=30, y=220)
        Label(f, text="Class",font=mfont).place(x=30, y=165)
        Label(f, text="Optional 1",font=mfont).place(x=30, y=250)
        Label(f, text="Optional 2",font=mfont).place(x=30, y=280)
        sbmitbtn =  Button(f, text="Submit", activebackground="pink", activeforeground="blue",font = rfont,bg='violet',
                             command=lambda: [process(),f.destroy()]).place(x=30, y=400)
        sbmitbtn =  Button(f, text="Home", activebackground="pink", activeforeground="blue",font = rfont,bg='violet',
                             command=lambda: [start_page(), f.destroy()]).place(x=400, y=400)
        sbmitbtn =  Button(f, text="Delete", activebackground="pink", activeforeground="blue",font = rfont,bg='violet',
                             command=lambda: [delete(), f.destroy()]).place(x=600, y=400)

        global save_class;save_class = Class.get()
        global save_name;save_name =  name_select.get()


        cur.execute('Select Roll_No,name,dayofmonth(dob),month(dob),year(dob),sex,optional_1,optional_2 from '+Class.get()+" where name =  '"+name_select.get()+"'")
        name = cur.fetchall()
        gender.set(name[0][5])
        dd.set(name[0][2])
        mm.set(name[0][3])
        yy.set(name[0][4])
        opn_1.set(name[0][6])
        opn_2.set(name[0][7])
        date_list = list(range(1,32))
        year_list = list(range(1990,2020))



        select_cls = OptionMenu(f, Class, "XI_A", "XI_B" ).place(x=260,y=170)
        sel_gen = OptionMenu(f, gender, "M", "F", "O").place(x=260, y=130)
        sel_dd = OptionMenu(f,dd, *date_list ).place(x=260, y=205)
        sel_mm = OptionMenu(f,mm, '01','02','03','04','05','06','07','08','09','10','11','12' ).place(x=305, y=205)
        sel_yy = OptionMenu(f,yy, *year_list ).place(x=350, y=205)
        opn1 = OptionMenu(f,opn_1,'Comp_Sc','Bio').place(x=260,y=250)
        opn2 = OptionMenu(f,opn_2,'Maths','Hindi').place(x=260,y=280)    


        global e1;e1 =  Entry(f, font=mfont,bg='yellow',width = 2);e1.place(x=260, y=50)
        global e2;e2 =  Entry(f, font=mfont,bg='yellow');e2.place(x=260, y=90)
        e1.insert(1,name[0][0])
        e2.insert(1,name[0][1])

    except:
        f.destroy()
        error()
   
def process():
    global save_class
    global save_name
    cur.execute("Delete from "+save_class+" where name = '"+save_name+"'")
    insert()
    
def delete():
    global save_class
    global save_name

    f =  Frame(r, height=600, width=900)
    f.pack()

    Label(f, text="Are you sure you \nwant to delete data of \n "+save_name+" Class "+save_class,font=tfont).place(x=100, y=100)
    sbmitbtn =  Button(f, text="No", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [start_page(), f.destroy()]).place(x=100, y=450)
    sbmitbtn =  Button(f, text="Yes", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                    command=lambda: [del_cnf(), f.destroy()]).place(x=350, y=450)
    


def del_cnf():
    global save_class
    global save_name
    cur.execute("Delete from "+save_class+" where name = '"+save_name+"'")
    cur.execute('commit')
    f =  Frame(r, height=600, width=900)
    f.pack()

    Label(f, text="Data deleted \nsucessfully",font=tfont).place(x=200, y=150)
    sbmitbtn =  Button(f, text="Home", activebackground="pink", activeforeground="blue",font = rfont,bg='yellow',
                         command=lambda: [start_page(), f.destroy()]).place(x=100, y=450)
    

    

# try:
#     start_page()

# except:
#     f.destroy()
#     error()
start_page()
r.mainloop()      
