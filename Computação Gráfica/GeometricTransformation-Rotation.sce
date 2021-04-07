Q = [0, 0; 0, 2; 2, 2; 2, 0; 0, 0];

plot(Q(:, 1), Q(:, 2));

// para visualizar melhor o quadrado

plot(-2, -2);
plot(4, 4);

/*
    In rotation, we rotate the object at particular angle θ theta from its origin
    the angle is in radian and the formula is:
    [cos θ, -sin θ
     sin θ, cos θ].
     
     the figure must be multiplied by this formula.
*/

angle = %pi / 4; // this is equivalent to 45º

// clockwise rotation
R = [cos(angle), -sin(angle);
     sin(angle), cos(angle)];

QR = Q * R;

plot(QR(:, 1), QR(:, 2));


angle = %pi / 3; // 60°

// anticlockwise rotation
R = [cos(angle), sin(angle);
     -sin(angle), cos(angle)];
     
QX = Q * R;
     
plot(QX(:, 1), QX(:, 2));


