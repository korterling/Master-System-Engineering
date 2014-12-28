//
//  main.cpp
//  HarryPrince
//
//  Created by HarryZhu on 12/28/14.
//  Copyright (c) 2014 HarryZhu. All rights reserved.
//

#include <iostream>

using namespace std;

void scale(int c){
    cout<< "I love"<<" "<< c << " 万年"<<endl;
}


/*void name(char c){
    cout<<" I love"<< " "<< c<<endl;
}
*/

int main(int argc, const char * argv[]) {
    
  /*  cout<< "请输入你最喜欢的人的名字"<<endl;
    
    int a;
    
    cin >>a;
    
    name(a);
   
   */
    
    cout<<"你爱他几万年？"<<endl;
    
    int b;

    cin >> b;
    
    scale(b);
    
    return 0;
}

