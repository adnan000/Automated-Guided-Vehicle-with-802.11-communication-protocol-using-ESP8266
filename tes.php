<?php
include 'db_connnection.php';
include 'get.php';
include 'update.php';

echo " Welcome !\n ";
$conn = OpenCon();
echo "Connected Successfully";

$status=$_GET["STATUS"];
$sql="SELECT Item from class where STATUS=$status";//WE ARE TRYING TO GET THE Item OF THE STUDENT BY ENTERING THE RANK
$result=mysqli_query($con,$sql);
if ($result->num_rows > 0) {
    while($row = $result->fetch_assoc()) {    
      echo  $row["Item"];
}
}
?>