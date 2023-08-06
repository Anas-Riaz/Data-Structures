#include <iostream>
using namespace std;
class Hashing
{
private:
    int *HT;
    int HS;
    int count; //number of values
    float load;
    
public:
    Hashing()
    {   
        this->load = 0;
        this->count = 0;
        this->HS = 10;
        this->HT = (int*) malloc(HS*sizeof(int));
        //  HT = new int(HS);
        for (int i = 0; i < HS; i++)
        {
            this->HT[i] = -1;
        }
    }
    
    Hashing(int HS)
    {
        this->load = 0;
        this->count = 0;
        this->HS = HS;
        this->HT = (int*) malloc(HS*sizeof(int));
        // HT = new int(HS);
        for (int i = 0; i < HS; i++)
        {
            this->HT[i] = -1;
        }
    }
    
    void insertKey(int x){   
        // cout << "Inside Functio" << endl;
        // int temp_array[5] = {23, 5, 5, 6, 7};
        
        // for (int z=0; z<5; z++) {
        //     x = temp_array[z];
       
        
        if (load >= 0.5){

            int loadArray[count];
            int k = 0;
            for (int j=0; j<HS; j++) {
                if (HT[j] != -1) {
                    loadArray[k++] = HT[j];
                }
            }
            
            int temp_count = count;
            this->load = 0;
            this->count = 0;
            free(HT);
            this->HS = HS * 2;
            this->HT = (int*) malloc(HS*sizeof(int));
            
            for (int i = 0; i < HS; i++){
                this->HT[i] = -1;
            }

            for (int i=0; i<temp_count; i++){
                insertKey(loadArray[i]);   
            }

        }
        int HI = x % HS;
        int i = HI;
        while(HT[i]!= -1){
            i = (i+1) % HS;
        }
        
        HT[i] = x;
        
        {
            // if (HT[HI] == -1){
        //     HT[HI] = x;
        // }
        
        // //if collision occurs
        // else {
        //     int i = HI;
        //     while(HT[i]!= -1){
        //         i = (i+1) % HS;
        //     }
        //     HT[i] = x;
        // }
        } 
        
        this->count++;
        
        this->load = float(count)/float(HS);
        
        // cout << "Mjhe chutti de dijiye" << endl;
    
}
    void displayHT(){
        cout<<"The Hash Table is :"<<endl;
        for (int i = 0; i < HS; i++) {
            cout<<i<<" - "<<"["<<HT[i]<<"]"<<endl;
        }
    }
    
};
int main()
{   
    int Hs = 2;
    int count;
    Hashing h1(Hs);
    int option,key;
            do
    {
        cout<<"What operations do you want to perform?Select Option Number.Enter 0 to exit."<<endl;
        cout<<"1. insertValue"<<endl;
        cout<<"2. print Hash Table"<<endl;
        cout<<"3. search In Hash Table"<<endl;
        cout<<"4. Clear Screen"<<endl;
        cin>>option;
        switch (option)
        {
        case 0:
            cout<<"Thanks !!"<<endl;
            break;
        case 1:
            cout<<"Enter the data you want to insert"<<endl;
            cin>>key;
            h1.insertKey(key);
            break;
        case 2:
            h1.displayHT();
            break;
        case 3:
        {   // cout<<"Enter the key that you want to search in Hash table :";
            // cin>>s;
            // cout<<endl;
            // bool res;
            // res = searchInHT(HT,HS,s);
            // if(res == true){
            //     cout << s << " key has been located in the Hash table!!!" << endl;
            //     cout<<endl;
            // }
            // else{
            //     cout << s << " key is not present in the Hash table!!!" << endl;
            //     cout<<endl;
            // }
        }
            break;
        case 4:
            system("cls");
            break;
        default:
            cout<<"Enter proper option Number "<<endl;
        }
    } while (option !=0);
    return 0;
}