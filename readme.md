###Vũ Thị Thuỷ Tiên  
####**Báo cáo học loop:**  
1.For  
- Cú pháp: `for(<bt1> ; <bt2> ; <bt3>)    S;`  
trong đó:  
S là lệnh đơn hoặc lệnh phức  
bt1 : thường là một lệnh gán khởi tạo cho biến điều
khiển  
bt2: là biểu thức logic, giá trị của biểu thức lôgic
này quyết định vòng lặp tiếp tục hay kết thúc  
bt3: thường là lệnh gán có tác dụng làm thay đổi
giá trị của biến điều khiển
- Ví dụ: `for(i=1;i<=n;i++)`  

2.while  
- Cú pháp: 
```sh
while (bt)  
 S;
```  
trong đó:  
bt là biểu thức lôgic  
S là một lệnh hoặc một dãy lệnh
- Ví dụ: 
```sh
while(r!=0)
{
   r=a%b;
   a=b;
   b=r;
}
```
3. do...while
- Cú pháp: 
```sh
do  S
while (bt);
```
trong đó:  
S là một câu lệnh đơn hoặc phức  
bt là biểu thức lôgic
- Ví dụ: 
```sh
do  
{
   r=a%b;
   a=b;
   b=r;
}
while(r!=0);
```