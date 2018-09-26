class turing():

    abc = None
    condition = None
    line = []
    rules = None
    action = ["r","l","q"]
    head = []

    def __init__(self, n):
        for i in range(n):
            self.line.append(" ")
        self.head = [0,"S0"]
        self.abc = []
        self.condition = ["S0","!"]
        self.rules = []
        
    def add_abc(self,a):
        self.abc.append(a)

    def add_condition(self, c):
        self.condition.append(c)

    def add_rules(self, r):
        if ((r[0] in self.abc) and (r[1] in self.condition) and (r[2] in self.abc) and (r[3] in self.condition) and (r[4] in self.action)):
            self.rules.append(r)
        else:
            print("Error")

    def add_text_line(self, txt):
        j = 1
        for i in txt:
            if (i in self.abc):
                self.line[j] = i
                j+=1
            else:
                print("Error")
                break;

   def work(self):
        
        
            

    
