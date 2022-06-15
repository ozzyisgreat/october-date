$cur = time();
$past = $cur - 1633060800;
$day = $past / 86400;

$day = sprintf "%.0f", $day;

print "its october $day\n"
