#include<iostream>
#include<cstdlib>
using namespace std;

struct Student{
  int id;
  char name[50];
  float cgpa;
}
int main(){
  Student* s =NULL;
  int n=0,choice,key;

  while(true){
    cout<<"1.add student\n";
    cout<<"2.linear seaarch\n";
    cout<<"3.binary search\n";
    cout<<"4.display";
    cout<<"5.exit";
     cout<<"enter the choice: ";
    cin>>choice;

    if(choice==1){
      s=(Student*)realloc(s,(n+1)*sizeof(Student));
      cout<<"enter id: ";
      cin>>s[n].id;
      cout<<"enter name: ";
      cin>>s[n].name;
      cout<<"enter cgpa: ";
      cin>>s[n].cgpa;
      n++;
    }

    else if(choice==2){
      cout<<"enter id to search: ";
      cin>>key;
      int found=0;
      for(int i=0;;i<n;i++){
        if(s[i]==key){
          cout<<s[i].id<<" "<<s[i].name<<" "<<s[i].cgpa<<" ";
          found=1;
          break;
        }
      }
      if(!found){
        cout<<"key not found";

      }
    }
    else if(choice==3){
      for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
          if(s[i].id>s[j].id){
            swap(s[i],s[j]);
          }
        }
      }
      cout<<"enter id to dearch: ";
      cin>>key;

      int low=0,high=n-1;
      int found=0;
      while(low<=high){
        int mid=(low+high)/2;
        if(s[mid].id==key){
          cout<<s[mid].id<<" "<<s[mid].name<<" "<<s[mid].cgpa<<" ";
          found=1;
        }
        else if(s[mid].id<key){
          low=mid+1;
        }
        else{
          high=mid-1;
        }
        if(!found){
          cout<<"student do not exist";
        }
      }
    }
    else if(choice==4){
      for(int i=0;i<n;i++){
        cout<<s[i].id<<" "<<s[i].name<<" "<<s[i].cgpa<<" ";
      }
    }
    else if(choice==5){
      free(s);
      break;
    }
  }
}