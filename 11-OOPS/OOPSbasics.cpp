#include<iostream>
#include<string.h>
using namespace std;

class Product{
    int id;                   //private members
    char name[100];           
    int mrp;
    int selling_price;

    public:
    //Constructor
    Product(){
    }
    Product(int id, char *n, int mrp, int selling_price){
        this->id=id;
        this->mrp=mrp;
        this->selling_price=selling_price;
        strcpy(name,n);

    }
    //copy constructor
    Product(Product &X){
        id=X.id;
        strcpy(name, X.name);
        mrp=X.mrp;
        selling_price=X.selling_price;
    }

    //this is callled constructor overloading, two constructors with same name
    //setters
    //we want selling price<=mrp
    void setMrp(int price){
        if(price>0)
            mrp=price;
    }
    void setSelling_price(int price){
        if(price>mrp){
            selling_price=mrp;
        }
        else
        selling_price=price;
    }
    //getters
    int getMrp(){
        return mrp;
    }
    int getSelling_price(){
        return selling_price;
    }
    void showDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"mrp: "<<mrp<<endl;
        cout<<"Selling price: "<<selling_price<<endl;
    }

};

int main(){
    // Product camera; //first constructor is called
    // camera.setMrp(100);  
    // camera.setSelling_price(200);

    Product camera(101,"Realme Narzo",28000,26000);//second constructor is called
    camera.showDetails();

    Product webcam(camera);  //special constructor present by default -> copy constructor
    webcam.showDetails();

    Product handyCam= camera;
    handyCam.showDetails();          //copy constructor

    cout<<"MRP "<< camera.getMrp()<<endl;
    cout<<"Selling price "<<camera.getSelling_price()<<endl; 
    return 0;
}