//
//  main.cpp
//  HarryPrince
//
//  Created by HarryZhu on 12/28/14.
//  Copyright (c) 2014 HarryZhu. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

//设置喜欢的人

class loveWho{
public:
    void setWho(string c){
        who =c;
        //       cout<< "I love"<<" "<< c << " 万年"<<endl;
    }
    string getWho(){
        return (who);
    }
    
private:
    string who;
    
};

//设置喜欢的时间


class loveTime{
    public:
    
    void setMuch(int c){
        much = c;
    }
    
    int getMuch(){
        return much;
    };

    private:
        int much;
    
};


//开始计算

int main(int argc, const char * argv[]) {
   
    loveWho Who;
    
    
   cout<< "请输入你最喜欢的人的名字"<<endl;
    
    string a;
    
    cin >>a;
    
    Who.setWho(a);
   
    
    loveTime howMuch;   //常见错误 在class后面加（）；然后在最后忘记 { }；
                    // 对于类的调用 就是 类名词 + 自己起一个新的名字来调用

    cout<<"你爱他几万年？"<<endl;
    
    int b;

    cin >> b;
    
    howMuch.setMuch(b);
    
    cout<< "I love" <<" "<< Who.getWho() << " "<<howMuch.getMuch() <<"万年"<<endl;
    
    return 0;
}

