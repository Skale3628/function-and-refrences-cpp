#include<iostream>
void fun(int x,int y){
    std::cout<<x<<y<<std::endl;
}
void fun(int x,float y){
    std::cout<<x<<y<<std::endl;
}
void fun(float x,float y){
     std::cout<<x<<y<<std::endl;
}
int main(){
    fun(10,20);
    fun(10,20,5f);
    fun(10,5f,20.5f);
    fun(10,5,20.5f);
    return 0;

}