<?php 

include 'db_connnection.php';
include 'select.php';
include 'update.php';
include 'insert.php';

$conn = OpenCon(); #Connection to server
	
	$sql=select($conn, "*", "item_stocks"); #Select all data 
		#update($conn, "Item='A'", "Status=0");
	if(mysqli_num_rows($sql) == 0){ 
		echo '<tr><td colspan="14">No Data.</td></tr>'; // Case row empty
	}else{ 
		$no = 1; // Data from 1st row
		while($row = mysqli_fetch_assoc($sql)){ // fetch query yang sesuai ke dalam array

		  //echo $no;
		  //echo ' ';
		  echo $row['Status'];
		  //echo "\n";
		  $no++; // mewakili data kedua dan seterusnya
		}
	}


CloseCon($conn);

?>