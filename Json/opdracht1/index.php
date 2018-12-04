<?php

$file = 'school3.json';
if(file_exists($file)){
  $filedata = file_get_contents($file);
  $objson = json_decode($filedata, true);
  echo"<hr><code><pre>";
  print_r($objson);
  echo"</pre></code><hr>"
}

else echo $file. 'File does not exist';




echo($objson['school']['mediacollege']['courses']['MD']);
echo("<br>");
echo($objson['school']['HorzonCollege']['courses']['VZ']);
?>
