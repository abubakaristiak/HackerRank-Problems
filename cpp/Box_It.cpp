#include<bits/stdc++.h>
using namespace std;

class Box {
    int l, b, h;

public: 
    Box() {
        l = b = h = 0;
    }
    
    Box(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    
    Box(Box &B) {
        this->l = B.l;
        this->b = B.b;
        this->h = B.h;
    }
    
    int getLength() {
        return this->l;
    }
    
    int getBreadth() {
        return this->b;
    }
    
    int getHeight() {
        return this->h;
    }
    
    long long calculateVolume() {
        return this->l * 1ll * this->b * 1ll * this->h;
    }
    
    bool operator<(Box &B) {
        if(this->l < B.l)
            return true;
        
        else if(this->l == B.l and this->b < B.b)
            return true;
            
        else if(this->l == B.l and this->b == B.b and this->h < B.h)
            return true;
            
        return false;  
    }
    
    friend ostream& operator<<(ostream &out, Box &B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};

int main() {
    int n;
    cin >> n;
    
    Box b1;
    for(int i = 0; i < n; i++) {
        int type;
        cin >> type;
        
        if(type == 1) {
            cout << b1 << endl;
        } 
        
        else if(type == 2) {
            int l, b, h;
            cin >> l >> b >> h;
            
            Box b2(l, b, h);
            b1 = b2;
            cout << b1 << endl;
        }
        
        else if(type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            
            Box b2(l, b, h);
            if(b2 < b1)
                cout << "Lesser" << endl;
            else
                cout << "Greater" << endl;
        }
        
        else if(type == 4) {
            cout << b1.calculateVolume() << endl;
        }
        
        else if(type == 5) {
            Box b2(b1);
            cout << b2 << endl;
        }
    }
    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// class Box{
//     private:
//         int length, breadth, height;
    
//     public:
//         Box(){
//             length = 0; 
//             breadth = 0; 
//             height = 0; 
//         }

//         Box(int l, int b, int h){
//             length = l;
//             breadth = b;
//             height = h;
//         }

//         int getLength(){
//             return length;
//         }
//         int getBreadth(){
//             return breadth;
//         }
//         int getHeight(){
//             return height;
//         }
//         long long int CalculateVolume(){
//             return (long long)length*breadth*height;
//         }

//         bool operator < (Box& other){
//             if(length !=other.getLength()){
//                 return length < other.getLength();
//             }
//             if(breadth !=other.getBreadth()){
//                 return breadth<other.getBreadth();
//             }
//             return height < other.getHeight();
//         }

//         void printBox(){
//             cout << length <<" "<<breadth << " "<<height;
//         }

// };
// int main()
// {
//     Box b1;
//     Box b2(2,3,4);

//     cout << b2.getLength() <<" " <<b2.getBreadth() <<" "<<b2.getHeight() <<endl;
//     if(b1 < b2){
//         cout << "Smaller"<<endl;
//     }
//     else{
//         cout <<"Larger" << endl;
//     }

//     b2.printBox();
//     cout << endl;
//     return 0;
// }