<!DOCTYPE html>
<html>
<head>
</head>
<body>

<h1>การออกแบบและพัฒนาระบบการจัดการโรงงานขยะรีไซเคิลด้วย internet of thing
 <hr> </h1>
 
 <p1> <b> ภูพาน ผลแก้ว 2563:</b> การออกแบบและพัฒนาระบบการจัดการโรงงานขยะรีไซเคิลด้วย internet of thing 
<br> ปริญญาวิศวกรรมศาสตร์บัณฑิต (วิศวกรรมคอมพิวเตอร์) สาขาวิชาวิศวกรรมคอมพิวเตอร์ มหาวิทยาลัยนครพนม 
  <br> <p2> <b> อาจารย์ที่ปรึกษาหลัก:  ผู้ช่วยศาสตราจารย์ ดร. คมกฤษณ์ ชูเรือง </b> </p2>
 <br> <p3><b> อาจารย์ที่ปรึกษาร่วม:  อาจารย์กฤชณัท รวมบุญ </b></p3>
 
 <p2> I design and develop a recycling waste management system by developing 3 parts. <br>
Part 1: Hardware<br>
Part 2: Software<br>
Section 3: Web<br>
Part 1 consists of
 <br>
1. Make the scale connect to the internet by using the Esp8266 microcontroller to connect with the scale via RS232 port.
When receiving the data, it is stored on the Json web server in order to import the data. That will be displayed on the website <br>
2. Online fingerprint scanner. It will be used as proof of identity of recyclable waste vendors using the R307 and Esp8266 microcontroller modules to work by displaying the Json form on the web server.<br> 
3. Online cameras
It is used to save license plates to prevent illegal purchases by using a Raspberry PI to work as a web server so that the web application can control the work the images that are obtained after the shooting is stored. In the database
<br>
Part 2 is the webapplication section.
backend php & front-end using Bootstrap framework
Used to communicate with all created devices.</p2>
<br>

 <br><br><hr>
 <p> ปัจจุบัน บริษัท จึงจิบเชียง รีไซเคิล 2008 จำกัด คือผู้ดำเนินการธุรกิจรีไซเคิล โดยมีกิจกรรมของบริษัทประกอบไปด้วย กระบวนการรับซื้อขยะ โดยการจัดทำประวัติและจัดลำดับคิวของผู้ขายแต่ละราย รวมไปถึงขั้นการออกบิลเพื่อแจ้งข้อมูลและค่าใช้จ่ายที่ผู้ขายแต่ละรายจะได้รับ จากนั้นจึงดำเนินการชั่งน้ำหนักโดยใช้ตาชั่งใหญ่ที่ได้รับมาตรฐานจากสำนักงานกลางชั่งตวงวัด กรมการค้าภายใน เก็บขยะเข้าคลังเพื่อรอการคัดแยก กระบวนการคัดแยกขยะแต่ละประเภท อาทิเช่น ขยะประเภทพลาสติก แก้ว กระดาษ เพื่อเตรียมเข้าสู่กระบวนการถัดไป เป็นต้น กระบวนการทำความสะอาดและคัดแยกสิ่งสกปรกรวมถึงชิ้นส่วนที่ไม่ต้องการออกจากขยะแต่ละประเภท กระบวนการย่อยขนาด หรือบดอัด เพื่อเตรียมจัดส่งให้กับลูกค้า  <br>บริษัทมีปริมาณการรับซื้อเศษขยะหรือวัสดุต่าง ๆเฉลี่ยอยู่ที่ระมาณ 20 ตันต่อวัน ซึ่งเป็นการรับซื้อจากผู้ประกอบการรายย่อย ทั้งในรูปสมาชิกและแบบขาจร นอกจากนี้ทางบริษัทยังมีสำนักงานสาขาซึ่งทำหน้าที่เป็นจุดรับซื้ออีกจำนวน 3 สาขา และมีพนักงานรวมกันมากกว่า 30 คน โดยทางบริษัทแบ่งส่วนงานหลักๆออกเป็น 2 ส่วน ประกอบด้วยฝ่ายธุรการและฝ่ายการผลิต แต่การบริหารงานหรือกิจกรรมที่เกิดขึ้นทั้งหมดจะเป็นไปในลักษณะของผู้บริหารคนเดียวเป็นผู้มีอำนาจในการดูแลและตัดสินใจ ส่งผลให้การบริหารและจัดการกิจกรรมต่าง ๆที่เกิดจากทั้ง 3 สาขา มีความยากลำบากและขาดการดูแลอย่างทั่วถึง นอกจากนี้เครื่องชั่งน้ำหนักที่ในจุดรับซื้อของแต่ละสาขายังเป็นลักษณะแบบ offline 
  <br>ซึ่งหากผู้บริหารต้องการทราบปริมาณขยะรีไซเคิลที่แต่ละสาขารับซื้อในแต่ละวัน ทางผู้บริหารจำเป็นต้องนำข้อมูลการซื้อขายในรอบสัปดาห์จากทั้ง 3 สาขา มาทำการรวมด้วยโปรแกรมไมโครซอฟท์ Excel ด้วยตนเอง เพื่อจัดทำรายงานสรุปต่าง ๆ ส่งผลให้ผู้บริหารไม่ทราบสถานนะในการซื้อขาย และข้อมูลต่าง ๆของแต่ละสาขาได้อย่างทันถ่วงที </p>
 
 
 
 <br><br><br>


</p1>
 
</head>
<body>

<h2>ตารางแผนการดำเนินงาน</h2>

<table>
  <tr>
    <th>ลำดับ</th>
    <th>กิจกรรม</th>
   <th>ระยะเวลา(<b> 6 Month </b>)</th>


  </tr>
   

  
  <tr>
    <td>1</td>
    <td>เก็บรวมรวมข้อมูล</td>
    <td>1 - 2 </td>
   </tr>
   
   <tr>
   <td>2</td>
    <td>ออกแบบอุปกรณ์ที่ใช้สื่อสารระหว่างตราชั่งใหญ่กับโปรแกรมที่สร้างขึ้น </td>
    <td>1 - 4 </td>
    </tr>
    
  <tr>
   <td> 3</td>
  <td>ออกแบบและพัฒนาตราชั่งเล็กที่สื่อสารระหว่างตราชั่งกับโปรแกรมผ่านเครือข่ายอินเทอร์เน็ต </td>
  <td> 2-4 </td>
  </tr>
  
  <tr>
  <td> 4</td>
  <td> ออกแบบและสร้างระบบแสกนลายนิ้วมือแบบออนไลน์</td>
  <td> 2-4 </td>
  </tr>
  
  
  <tr>
  <td><b> 5</b></td>
  <td>ออกแบบและพัฒนาระบบอุปกรณ์บันทึกภาพแบบออนไลน์ร่วมกับโปรแกรมที่พัฒนาขึ้นบนเว็ป </td>
  <td> 2-4 </td>
  </tr>
  <tr>
  <td> 6</td>
  <td> ออกแบบระบบฐานข้อมูล</td>
  <td>3-5 </td>
  </tr>
  
<tr>
<td> 7 </td>
<td> ออกแบบและพัฒนาระบบเว็ปแอพพลิเคชั่นสำหรับติดต่อกับอุปกรณ์ต่าง ๆ ที่สร้างขึ้น</td>
<td> 3-5 </td>
</tr>

<tr>
<td>8</td>
<td> ทำการทดลองอุปกรณ์ต่าง ๆ ที่พัฒนาขึ้น </td>
<td>6 </td>
</tr>
<tr>
<td>9</td>
<td>สรุปผล </td>
<td>6 </td>
 </tr>
 
</table>



</body>
</html>

