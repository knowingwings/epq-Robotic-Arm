import tkinter as tk

class Application(tk.Frame):

    #initiallising the object
    def __init__(self, master=None):
        super().__init__(master)
        self.master = master
        self.pack()
        self.create_widgets()

    #insert widgets for application here
    def create_widgets(self):
        self.hi_there = tk.Button(self)
        self.hi_there["text"] = "Hello World\n(click me)"
        self.hi_there["command"] = self.say_hi
        self.hi_there.pack(side="top")

        self.quit = tk.Button(self, text="QUIT", fg="red",
                              command=self.master.destroy)
        self.quit.pack(side="right")

    #create button functions here
    def say_hi(self): 
        print("hi there, everyone!")

root = tk.Tk() #instansting the window
app = Application(master=root) #creates the application

#Window modifactions
app.master.title("Hello World") #Sets window title
app.master.geometry("1960x1080") #sets Window Size



app.mainloop()