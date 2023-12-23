/**
 * @param {string} path
 * @return {boolean}
 */
var isPathCrossing = function(path) {
    let x = 0,
        y = 0
    const occupied = {'0;0': true}
    for (let i = 0; i < path.length; i++) {
        const direction = path[i]
        if (direction === 'N') y++
        else if (direction === 'S') y--
        else if (direction === 'E') x++
        else x--

        const k = `${x};${y}`
        if (occupied[k]) return true
        occupied[k] = true
    }
    return false
};