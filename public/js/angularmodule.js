
			var app = angular.module('Boya',[]);
			app.controller ('presionController',function  ($scope , $http) {

				$scope.presion='0';
				$scope.PSI='0';	

				$scope.toPSI = function (){

					$http.post('/move/arduino',{position:$scope.presion}).

			    	success(function(data, status, headers, config) {
				      
				    }).
				    error(function(data, status, headers, config) {
				      // log error
				    });

					switch($scope.presion){
						case '0':
							$scope.PSI = '0';
							break;
						case '1':
							$scope.PSI = '20';
							break;

						case '2':
							$scope.PSI = '30';
							break;

						case '3':
							$scope.PSI = '40';
							break;
						case '4':
							$scope.PSI = '50';
							break;
						case '5':
							$scope.PSI = '60';
							break;
						case '6':
							$scope.PSI = '70';
							break;
						case '7':
							$scope.PSI = '80';
							break;
					}

				} 

			});
				
