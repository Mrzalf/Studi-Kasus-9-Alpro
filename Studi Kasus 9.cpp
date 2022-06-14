#include <iostream>
using namespace std;

class data{
  public:
    void input(){
     	for(k = 0; k < 20; k++){
		    cout<<"Masukkan data ke-"<<k+1<<": ";   
        cin>>a[k]; 
	    }
     
    }
    void proses(){ 
      cout<<"\nMatriks sebelum diurutkan\n";
    	k = 0;
    	for(i = 0; i < 4; i++){
    		for(j = 0; j < 5; j++){
    			b[i][j] = a[k];
    			cout<<b[i][j]<<"\t";
    			k++;
    		}
    		cout<<endl;
    	}
      // Bubble Sorting
    	for(i = 0; i < 19; i++){
    		for(j = 0; j < 19; j++){
    			if(a[j] > a[j+1]){
    				temp = a[j];
    				a[j] = a[j+1];
    				a[j+1] = temp;
    			}
    		}
    	}
    }
    void output(){
      cout<<"\n\nData setelah diurutkan\n";
    	for(k = 0; k < 20; k++){
    		cout<<a[k]<<" ";
    	}
    	cout<<"\n\nMatriks setelah diurutkan\n";
    	k = 0;
    	for(i = 0; i < 4; i++){
    		for(j = 0; j < 5; j++){
    				b[i][j] = a[k];
    				cout<<b[i][j]<<"\t";	
    				k++;	
    		}
    		cout<<endl;
    	}  
    }
  private:
  	int a[20], b[4][5], i, j, k, temp;
};

int main() {
  data d;
  d.input();
  d.proses();
  d.output();
}