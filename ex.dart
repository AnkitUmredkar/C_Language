import 'dart:async';
import 'dart:io';

void main(){

  print("Hello");
  Future.delayed(
    Duration(seconds: 4),
    (){
      print("Hello Dart");
    }
  );

  Timer.periodic(Duration(seconds: 3), (timer) {
    print("Hello world");
   });

  // Timer(Duration)
  Timer(
    Duration(seconds: 2),
    (){
      print("Hello flutter");
    }
  );
  
  Future.delayed(
    Duration(seconds: 1),
    (){
      print("Hello NAm");
    }
  );

}