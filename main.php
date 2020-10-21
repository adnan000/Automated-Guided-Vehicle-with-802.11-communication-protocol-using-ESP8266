<?php 

include 'db_connnection.php';
include 'get.php';
include 'update.php';

echo " Welcome !\n ";
$conn = OpenCon();
echo "Connected Successfully";


 ?>
 
<!DOCTYPE html>
<html>
  <head>
  <meta http-equiv="refresh" content="5">
  </head>
    <body>
      <style>
        #wntable {
          border-collapse: collapse;
          width: 50%;
        }
 
        #wntable td, #wntable th {
          border: 1px solid #ddd;
          padding: 8px;
        }
 
        #wntable tr:nth-child(even){background-color: #f2f2f2;}
 
        #wntable tr:hover {background-color: #ddd;}
 
        #wntable th {
          padding-top: 12px;
          padding-bottom: 12px;
          text-align: left;
          background-color: #00A8A9;
          color: white;
        }
      </style>
 
      <div id="cards" class="cards" align="center">
          <h1> Data Stock Item</h1>
          <table id="wntable">
          <tr>
            <th>No</th>
            <th>Item</th>
			<th>Point</th>
            <th>Waktu</th>
          </tr>
          <?php
		  
          $sql=get($conn, "*", "item_stocks");;
		  
          if(mysqli_num_rows($sql) == 0){ 
            echo '<tr><td colspan="14">Data Tidak Ada.</td></tr>'; // jika tidak ada entri di database maka tampilkan 'Data Tidak Ada.'
          }else{ // jika terdapat entri maka tampilkan datanya
            $no = 1; // mewakili data dari nomor 1
            while($row = mysqli_fetch_assoc($sql)){ // fetch query yang sesuai ke dalam array
              echo '
              <tr>
                <td>'.$no.'</td>
                <td>'.$row['Item'].'</td>
                <td>'.$row['Location'].'</td>
                <td>'.$row['Status'].'</td>
              </tr>
              ';
              $no++; // mewakili data kedua dan seterusnya
            }
          }
		  
		  update($conn, "Location=ST_GeomFromText('POINT(2 3)')", "Status=1");
		  
		  CloseCon($conn);
		  
          ?>
        </table>
      </div>
  </body>
</html>