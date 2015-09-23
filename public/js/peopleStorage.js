$(document).ready(function  () {

	$(window).bind('storage', function(event) {
    var json = JSON.parse(localStorage.getItem('myjson'));
         
    if (json != null) {
        console.log(json.badge);
    };
     
    localStorage.removeItem('myjson');
});

	
});
	