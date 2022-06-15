<?php
$cur = time();
$past = $cur - 1633060800;
$day = round($past / 86400);
echo("its october " . $day . "\n");
?>
