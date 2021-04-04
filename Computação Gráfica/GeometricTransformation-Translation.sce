Q = [0, 0; 0, 2; 2, 2; 2, 0; 0, 0];

plot(Q(:, 1), Q(:, 2));

// para visualizar melhor o quadrado

plot(-4, -4);
plot(8, 8);

/*
    A translation moves an object to a different position on the screen. You can translate a point in 2D by adding translation coordinate (tx, ty) to the original coordinate X,Y to get the new coordinate X′,Y′. The pair (tx, ty) is called the translation vector or shift vector. P' = P + T
*/

// Move the square to the right. x = 4, y = 0
T = [4, 0; 4, 0; 4, 0; 4, 0; 4, 0];
QT = Q + T;

plot(QT(:, 1), QT(:, 2));

// move the square up. x = 4, y = 4
T = [4, 4; 4, 4; 4, 4; 4, 4; 4, 4];
QT = Q + T;

plot(QT(:, 1), QT(:, 2));

// move the square left. x = 0, y = 4
T = [0, 4; 0, 4; 0, 4; 0, 4; 0, 4];
QT = Q + T;

plot(QT(:, 1), QT(:, 2));



