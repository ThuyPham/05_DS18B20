# 05_DS18B20
One-Wire technology - DS18B20 temperature sensor
+ Chương trình được thực thi trên IAR - MSP430
   Các file được lưu trong folder : IAR-MSP430_DS18B20
   Để sử dụng chương trình, cần kết nối phần cứng như sau : 
   	_ VCC TI  --- VDD DS18B20 
	_ GND TI  --- GND DS18B20
	_ P2.2 TI --- DQ - Data In/Out DS18B20 (One-Wire bus)
	_ 1 điện trở R = 4.7K nối giữa VDD và DQ của DS18B20. 
File ds18B20IAR.h	  : là file chứa các hàm chức năng giúp làm việc với cảm biến DS18B20 One-Wire bus. 
File UART.h		  : là file giúp MSP430 giao tiếp với các phần mềm giao tiếp cổng COM.
File ex1ReadTemperature.c : là ví dụ cơ bản : đọc giá trị nhiệt độ của một cảm biến khi trên One-Wire bus có một cảm biến DS18B20.
DS18B20 One-Wire bus API đang trong quá trình hoàn thiện thêm các chức năng. 
