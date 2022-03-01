from ast import operator
from string import digits
import tkinter as tk
Large_font_style=("Arial",40)
Font_Style=("Arial",16)
LIGHT_GRAY="#F5F5F5"
Label_color="#25265E"
WHITE="#FFFFFF"
LIGHT_BLUE="#CCEDFF"
OFF_WHITE="#F8FAFF"
DIGITS_FONT_STYLE=("Arial",24,"bold")
DEFAULT_FONT_STYLE=("Arial",20)
class Calculator:
    def __init__(self):
        self.window=tk.Tk()
        self.window.geometry("350x667")
        self.window.resizable(0,0)
        self.window.title("Calculator")
        self.total_expression=""
        self.current_expression=""

        self.display_frame=self.create_display_frame()
        self.total_labels,self.label=self.create_label_frame()
        self.digits={
            7:(1,1),8:(1,2),9:(1,3),
            4:(2,1),5:(2,2),6:(2,3),
            1:(3,1),2:(3,2),3:(3,3),
            0:(4,2),'.':(4,1)
        }
        self.operators={"/":"\u00F7","*":"\u00D7","-":"-","+":"+"}
    
        
        self.buttons_frame=self.create_buttons_frame()
        self.buttons_frame.rowconfigure(0,weight=1)
        for x in range(1,5):
            self.buttons_frame.rowconfigure(x,weight=1)
            self.buttons_frame.columnconfigure(x,weight=1)

        self.create_digits_buttons()
        self.create_operator_buttoms()
        self.create_specials()

    
    def create_specials(self):
        self.create_clear_button()
        self.create_equal_buttons()

    def create_label_frame(self):
        total_labels=tk.Label(self.display_frame,text=self.current_expression,anchor=tk.W,bg=LIGHT_GRAY,fg=Label_color,padx=24,font=Font_Style)
        total_labels.pack(expand=True,fill="both") 
        label=tk.Label(self.display_frame,text=self.current_expression,anchor=tk.W,bg=LIGHT_GRAY,fg=Label_color,padx=24,font=Large_font_style)
        label.pack(expand=True,fill="both")
        return total_labels,label


    def create_display_frame(self):
        frame=tk.Frame(self.window,height=200,bg=LIGHT_GRAY)
        frame.pack(expand=True,fill="both")
        return frame
  
    def add_to_expression(self,value):
        self.current_expression += str(value)
        self.update_label()

    def create_digits_buttons(self):
        for digit,value in self.digits.items():
            button=tk.Button(self.buttons_frame,text=str(digit),bg=WHITE,fg=Label_color,font=DIGITS_FONT_STYLE,borderwidth=0,command=lambda x=digits:self.add_to_expression(x))
            button.grid(row=value[0],column=value[1],sticky=tk.NSEW)

    def create_operator_buttoms(self):
        i=0
        for operator ,symbol in self.operators.items():
            button=tk.Button(self.buttons_frame,text=symbol,bg=OFF_WHITE,fg=Label_color,font=DEFAULT_FONT_STYLE,borderwidth=0)
            button.grid(row=i,column=4,sticky=tk.NSEW)
            i+=1
    
    def create_clear_button(self):
        for operator ,symbol in self.operators.items():
            button=tk.Button(self.buttons_frame,text="C",bg=OFF_WHITE,fg=Label_color,font=DEFAULT_FONT_STYLE,borderwidth=0)
            button.grid(row=0,column=1,columnspan=3,sticky=tk.NSEW)

    def create_equal_buttons(self):
        for operator ,symbol in self.operators.items():
            button=tk.Button(self.buttons_frame,text="=",bg=LIGHT_BLUE,fg=Label_color,font=DEFAULT_FONT_STYLE,borderwidth=0)
            button.grid(row=4,column=3,columnspan=2,sticky=tk.NSEW)

    
    def create_buttons_frame(self):
        frame=tk.Frame(self.window)
        frame.pack(expand=True,fill="both")
        return frame

    def update_total_label(self):
        self.total_labels.config(text=self.total_expression)


    def update_label(self):
        self.label.config(text=self.current_expression)

    def run(self):
        self.window.mainloop()


if __name__=="__main__":
    calc=Calculator()
    calc.run()

    