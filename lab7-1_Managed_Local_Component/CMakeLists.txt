# Lab 7-1: Local Component Demo

## คำอธิบาย
การทดลองนี้แสดงการใช้งาน component ที่มีอยู่ในโฟลเดอร์ `components/Sensors/` ของ project  
โดยโปรแกรมหลัก (`lab7-1.c`) จะเรียกใช้ฟังก์ชัน `sensor_init()` และ `sensor_read_data()` จาก component เพื่อจำลองการอ่านค่าอุณหภูมิและความชื้น แล้วแสดงผลผ่าน log

## สรุปคำสั่งที่ใช้ และผลลัพธ์ที่ได้

### 1. ตั้งค่า target เป็น esp32
```bash
idf.py set-target esp32
