Q = [0, 0; 0, 2; 2, 2; 2, 0; 0, 0];

plot(Q(:, 1), Q(:, 2));

// para visualizar melhor o quadrado

plot(-2, -2);
plot(4, 4);

/*
    Reflection is the mirror image of original object. In other words, we can say that it is a rotation operation with 180°. In reflection transformation, the size of the object does not change.
*/

angle = %pi / 1; // 180°

// anticlockwise rotation
R = [cos(angle), sin(angle);
     -sin(angle), cos(angle)];
     
QX = Q * R;
     
plot(QX(:, 1), QX(:, 2));



