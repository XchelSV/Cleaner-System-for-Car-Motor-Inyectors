module.exports = (function (app,five){

	var board = new five.Board();

	app.route('/move/arduino')
	.post(function (request,response){
		
		var position = request.body.position;

		  	 if(position=='0'){
		  	 	
		  	 	board.on("ready", function() {
		  		var servo = new five.Servo(12);
		  		servo.to(0);
		  		
		  		})
		  		}
		  	 if(position=='1'){
		  	 	
		  	 	board.on("ready", function() {
		  		var servo = new five.Servo(12);
		  		servo.to(25);
		  		
		  		})
		  		}
		  	 if(position=='2'){
		  	 	
		  	 	board.on("ready", function() {
		  		var servo = new five.Servo(12);
		  		servo.to(50);
		  		
		  		})
		  		}
		  	 if(position=='3'){
		  	 	
		  	 	board.on("ready", function() {
		  		var servo = new five.Servo(12);
		  		servo.to(75);
		  		
		  		})
		  		}
		  	 if(position=='4'){
		  	 	
		  	 	board.on("ready", function() {
		  		var servo = new five.Servo(12);
		  		servo.to(100);
		  		
		  		})
		  		}
		  	 if(position=='5'){
		  	 	
		  	 	board.on("ready", function() {
		  		var servo = new five.Servo(12);
		  		servo.to(125);
		  		
		  		})
		  		}
		  	 if(position=='6'){
		  	 	
		  	 	board.on("ready", function() {
		  		var servo = new five.Servo(12);
		  		servo.to(150);
		  		
		  		})
		  		}
		  	 if(position=='7'){

		  	 	board.on("ready", function() {
		  		var servo = new five.Servo(12);
		  		servo.to(180);
		  		
		  		})
		  		}
		  
	})



});
