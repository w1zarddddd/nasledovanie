#include <iostream>

using namespace std;
class Device{
public:
void Akkumulyator(){
cout <<"Зарядить устройство"<< endl;
}
};
class Camera{
public:
void photo(){
cout<<"Фотографировать"<< endl;
}

};
class MobilePhone: public Device,public Camera{
public:
void Microphone(){
cout<<"Разговаривать по телефону"<< endl;
}

};

int main()
{
MobilePhone MobilePhone_instance;
MobilePhone_instance.photo();
MobilePhone_instance.Akkumulyator();
MobilePhone_instance.Microphone();


return 0;
}
