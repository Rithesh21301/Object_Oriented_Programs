#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class IITM()
{
    int M,N;
    M=5;
    N=5;
    vector<int>students(N);
    vector<int>faculty(M);



}

class Faculty{
    public:
        string  name;
        bool permanent;
        friend class BTech;
};

class Student{
    private:
        string rollno;
        string hostel;
        float cgpa;
        string facad;

    friend class BTech;
};

class BTech{

    BTech(RollNumber r, string hostel, Faculty facad, float cgpa){
         rollno=r;
         hostel=hostel;
         cgpa=cgpa;
         facad=facad;
         
         };
    string getHostel(){ return hostel; };
    Faculty getFacad(){ return facad; };
    void changeHostel(string st){ hostel=st; };
    Faculty getBTPGuide();
    setBTPGuide(Faculty);


};

int main(N <= 10^5, M <= 100, number of hostels <= 10)
{
    Btech bt;
    bt(cs24b001,Mandakini,sreenivas,8.00);

}

