(function ($) {
    "use strict";
    var mainApp = {

        main_fun: function () {
            /*====================================
            METIS MENU 
            ======================================*/
            $('#main-menu').metisMenu();

            /*====================================
          LOAD APPROPRIATE MENU BAR
       ======================================*/
            $(window).bind("load resize", function () {
                if ($(this).width() < 768) {
                    $('div.sidebar-collapse').addClass('collapse')
                } else {
                    $('div.sidebar-collapse').removeClass('collapse')
                }
            });



        },

        initialization: function () {
            mainApp.main_fun();

        }

    }
    // Initializing ///

    $(document).ready(function () {
        mainApp.main_fun();
    });

}(jQuery));

// method Jquery 
$(".table-index-medicoativo thead").click(function () {
    window.location.href = "medicos_ativos.php";
});

// method Jquery 
$(".table-index-pacienteativo thead").click(function () {
    window.location.href = "desejo_doar.php";
});


// method Jquery 
$(".table-index-consultasativas thead").click(function () {
    window.location.href = "consulta.php";
});


// method Jquery para atualizar Paciente na tabela
$(".table-ativos-requisicoes-doacao tr").click(function () {
    var id = $(this).closest('tr').attr('id');
    window.location.href = "atualizar_requisicaoDeDoacao.php?id=" + id;
});

// method Jquery para remover Paciente de tabela
$(".table_ativos").on('click', '.deleteRequestDoacao', function () {
    if (confirm("Tem certeza que deseja remover cancelar a requisição desta doação?")) {
        var id = $(this).closest('tr').attr('id');
        $(this).closest('tr').remove();
        window.location.href = "delete_bdPaciente.php?id=" + id;
    } else {
        window.location.href = "minhas_requisicoes.php";
    }
});

document.querySelector("#Logout").addEventListener('click', e => {
    e.preventDefault();
    window.location.href = "login.php";
});

$("#btn-requisitar-doacao").click(function(){

    let date = document.querySelector("#user_dataLimite");

    var today = new Date();
    
    var dd = String(today.getDate()).padStart(2, '0');
    var mm = String(today.getMonth() + 1).padStart(2, '0'); //January is 0!
    var yyyy = today.getFullYear();

    today = yyyy + '-' + mm + '-' + dd;
    
    // só deve permitir datas atuais
    // se o valor escolhido for antes de hoje, não permitir
    if (date.value < today) {
        alert("Escolha uma data válida.");
        return false;
    } else {
       document.querySelector('.form-solicitar-doacao').submit();
    }
});

