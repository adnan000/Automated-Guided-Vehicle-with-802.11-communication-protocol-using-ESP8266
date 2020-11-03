<?php

function update($conn, $set, $where) 
{

$sql="UPDATE item_stocks SET $set WHERE $where ";
$result=$conn->query($sql);
if ($conn->query($sql) === TRUE) {
  echo "Record updated successfully";
} else {
  echo "Error updating record: " . $conn->error;
}
}
?>