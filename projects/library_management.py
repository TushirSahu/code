from re import L

from black import TRANSFORMED_MAGICS


class Library:
    def __init__(self,listofbook):
        self.book=listofbook

    def displayavailablebooks(self):
        print(f"The following books are present in the library :")
        for books in self.book:
            print(f"{books} ")

    def borrow(self,bookname):
        if bookname in self.book:
            print(f"You have been issued {bookname}.Please keep it safe and return it in within 30 days")
            self.book.remove(bookname)
            return True
        else:
            print("Sorry,this book is not present now")
            return False

    def returnb(self,bookname):
        self.book.append(bookname)
        print("Thanks,for returning the book!!")

class Student:
    def req(self): 
        reqbook=input("Enter the name of the book that you need to borrow:\n")
        self.book=reqbook
        return self.book
    def returnBook(self):
        self.book=input("Enter the book you need to return:\n")
        return self.book
    

if __name__=="__main__":
    central_Library=Library(["Python for all","Algorithms","DSA with Abdul Bari","Django"])
    #central_Library.displayavailablebooks()
    student=Student()
    while(True):
     welcome='''***************Welcome to Central Library***************
         Please choose an option:
            1.Display the available books
            2.Request a book
            3.Return a book
            4.Exit the library
            '''
     print(welcome)
     a=int(input("Enter a choice:\n"))
     if(a==1):
         central_Library.displayavailablebooks()
     elif(a==2):
         central_Library.borrow(student.req())
     elif(a==3):
         central_Library.returnb(student.returnBook())
     elif(a==4):
         print("Thanks for using this library!Hope to see you soon")
         exit()
     else :
         print("Invalid choice")
