(function($) {
    "use strict";
    var mainApp = {

            main_fun: function() {
                /*====================================
                METIS MENU 
                ======================================*/
                $('#main-menu').metisMenu();

                /*====================================
              LOAD APPROPRIATE MENU BAR
           ======================================*/
                $(window).bind("load resize", function() {
                    if ($(this).width() < 768) {
                        $('div.sidebar-collapse').addClass('collapse')
                    } else {
                        $('div.sidebar-collapse').removeClass('collapse')
                    }
                });



            },

            initialization: function() {
                mainApp.main_fun();

            }

        }
        // Initializing ///

    $(document).ready(function() {
        mainApp.main_fun();
    });

}(jQuery));

// method Jquery para remover Paciente de tabela
$(".table_ativos").on('click', '.deletePaciente', function() {
    if (confirm("Tem certeza que deseja remover o cadastro desse paciente?")) {
        var id = $(this).closest('tr').attr('id');
        $(this).closest('tr').remove();
        window.location.href = "delete_bdPaciente.php?id=" + id;
    }
});

$(".table_ativos").on('click', '.deleteMedico', function() {
    if (confirm("Tem certeza que deseja remover o cadastro desse médico?")) {
        var id = $(this).closest('tr').attr('id');
        $(this).closest('tr').remove();
        window.location.href = "delete_bdMedico.php?id=" + id;
    }
});

$(".table_ativos").on('click', '.delete_avaliacao', function() {
    if (confirm("Tem certeza que deseja remover a avaliação desse paciente?")) {
        var id = $(this).closest('tr').attr('id');
        $(this).closest('tr').remove();
        window.location.href = "delete_bdconsulta.php?id=" + id;
    }
});

document.querySelector("#Logout").addEventListener('click', e => {
    e.preventDefault();
    window.location.href = "login.php";
});