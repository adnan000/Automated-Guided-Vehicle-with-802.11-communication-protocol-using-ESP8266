<?php
function OpenCon()
 {
 $dbhost = "localhost";
 $dbuser = "root";
 $dbpass = "";
 $db = "warehouse_stock";
 $conn = new mysqli($dbhost, $dbuser, $dbpass,$db) or die("Connect failed: %s\n". $conn -> error);
 
 echo "Connected Successfully to Server\n\n";
 return $conn;
 }
 
function CloseCon($conn)
 {
 $conn -> close();
 }
   
?>