const http = require('http');

http.createServer( (req,res) => {
    res.write('Este es mi primer webserver')
}).listen(80);

console.log('Servidor arriba en el puerto 80')