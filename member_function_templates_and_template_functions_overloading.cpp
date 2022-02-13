# include <iostream>
using namespace std;
template <class T,class A>
class student{
    private:
        T rollno;
        A name;
    public:
        student(T t,A a){
            rollno=t;
            name=a;
        }

        void printdata();
};

template <class T,class A>
void student<T,A> ::printdata(){
    cout<<"the name of student is "<<name<<endl<<"the roll number of student is "<<rollno<<endl;
}

void func(){
    cout<<"I am not templatized"<<endl;
}

template <class C>
void func(){
    cout<<"I am templatized"<<endl;
}

int main(){
    student <int,string> samar(25,"samar");
    samar.printdata();
    func();
return 0;
}