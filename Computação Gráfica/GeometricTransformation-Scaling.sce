Q = [0, 0; 0, 2; 2, 2; 2, 0; 0, 0];

plot(Q(:, 1), Q(:, 2));

// para visualizar melhor o quadrado

plot(-2, -2);
plot(4, 4);

/*
    To change the size of an object, scaling transformation is used. In the scaling process, you either expand or compress the dimensions of the object. Scaling can be achieved by multiplying the original coordinates of the object with the scaling factor to get the desired result.
*/

QS = Q * 2; // 2 here is the scaling factor

plot(QS(:, 1), QS(:, 2));

// para visualizar melhor o quadrado

plot(10, 10);




