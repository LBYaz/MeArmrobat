/**奇果派-机械臂示例代码
  舵机初始化旋转至90度
  tip：舵机不同于电机的循环旋转，转动范围是0至180度*/
  
#include <Servo.h>
Servo servo_6;//创建舵机变量，这个舵机名字servo_6
Servo servo_7;
Servo servo_8;
Servo servo_9;

void setup(){
  servo_6.attach(6);//把管脚6的数据给变量servo_6
  servo_7.attach(7);
  servo_8.attach(8);
  servo_9.attach(9);
  servo_6.write(90);
  servo_7.write(90);
  servo_8.write(90);
  servo_9.write(90);
}

void loop(){

}