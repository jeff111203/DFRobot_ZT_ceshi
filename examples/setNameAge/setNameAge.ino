#include <DFRobot_ZT.h>
void setup(){
    Serial.begin(115200);  //初始化串口
    delay(100);
    DFRobot_ZT zt;   //建立对象
    zt.setName("zhangsan");zt.setAge(18);//进行赋值
    Serial.print("name=");Serial.println(zt.getName());//打印和取值
    Serial.print("age=");Serial.println(zt.getAge());
}
void loop(){
    
}