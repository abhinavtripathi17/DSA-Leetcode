// Last updated: 8/4/2026, 12:37:56 PM
/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {

        return "Hello World";
        
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */